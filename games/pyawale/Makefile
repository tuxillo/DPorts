# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: ports/games/pyawale/Makefile,v 1.14 2012/12/24 09:44:11 svnexp Exp $

PORTNAME=	pyawale
PORTVERSION=	0.4.0
PORTREVISION=	3
CATEGORIES=	games python
MASTER_SITES=	http://download.gna.org/pyawale/

MAINTAINER=	nemysis@gmx.ch
COMMENT=	African board game

LICENSE=	GPLv2

RUN_DEPENDS=	${PYGAME}

USE_PYTHON=	yes

PLIST_FILES=	bin/${PORTNAME} \
		share/applications/${PORTNAME}.desktop \
		share/pixmaps/${PORTNAME}.png
PLIST_DIRSTRY=	share/applications

PORTDATA=	*
PORTDOCS=	*

DOCSRCDIR1=	${WRKSRC}
DOC_FILES1=	AUTHORS ChangeLog LISEZMOI NEWS README

DOCSRCDIR2=	${WRKSRC}/docs
DOCSDIR2=	${DOCSDIR}/docs
DOC_FILES2=	*.rest *.html *.jpg

SUB_FILES=	${PORTNAME}

.include <bsd.port.options.mk>

post-patch:
	@${FIND} ${WRKSRC} -name '*.py' | ${XARGS} \
		${REINPLACE_CMD} -e 's|/usr/bin/python|${PYTHON_CMD}|'
	@${FIND} ${WRKSRC} -name "*.bak" -delete

do-build:
	@${PYTHON_CMD} -m compileall ${WRKSRC}
	@${PYTHON_CMD} -O -m compileall ${WRKSRC}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin
	${MKDIR} ${DATADIR}
	@(cd ${WRKSRC}/src && ${COPYTREE_SHARE} \* ${DATADIR})
	${INSTALL_DATA} ${WRKSRC}/docs/${PORTNAME}.png ${PREFIX}/share/pixmaps
	${MKDIR} ${PREFIX}/share/applications
	${INSTALL_DATA} ${WRKSRC}/docs/${PORTNAME}.desktop ${PREFIX}/share/applications
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${DOC_FILES1:S|^|${DOCSRCDIR1}/|} ${DOCSDIR}
	${MKDIR} ${DOCSDIR2}
	${INSTALL_DATA} ${DOC_FILES2:S|^|${DOCSRCDIR2}/|} ${DOCSDIR2}
.endif
.include <bsd.port.mk>
