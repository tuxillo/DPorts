# Created by: Diego Depaoli <trebestie@gmail.com> and Yinghong Liu <relaxbsd@gmail.com>
# $FreeBSD: ports/multimedia/smplayer/Makefile,v 1.29 2012/12/27 19:01:05 svnexp Exp $

PORTNAME=	smplayer
DISTVERSION=	0.8.3
CATEGORIES=	multimedia audio kde
MASTER_SITES=	SF/${PORTNAME}/SMPlayer/${PORTVERSION}

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Complete front-end based on Qt4 for mplayer

RUN_DEPENDS=	mplayer:${PORTSDIR}/multimedia/mplayer \
		${LOCALBASE}/share/smplayer/themes:${PORTSDIR}/multimedia/smplayer-themes

USE_QT4=	gui network xml qmake_build moc_build rcc_build uic_build \
		uic3_build porting_build linguist_build

ALL_TARGET=	src/smplayer

MAKE_JOBS_UNSAFE=	yes
USE_BZIP2=	yes
USE_GMAKE=	yes
INSTALLS_ICONS=	yes

MAN1=		smplayer.1
MANCOMPRESSED=	yes

PORTDOCS=	Changelog Copying.txt Install.txt Not_so_obvious_things.txt \
		Readme.txt Release_notes.txt

post-patch:
	@${REINPLACE_CMD} -e 's|qmake|${QMAKE}|g' \
		-e 's|lrelease|${QT_PREFIX}/bin/lrelease-qt4|g' \
		-e 's|PREFIX=/usr/local|PREFIX=${PREFIX}|g' \
		-e 's,/share/man,/man,g' \
		${WRKSRC}/Makefile

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for doc in ${PORTDOCS}
	@${INSTALL_DATA} ${WRKSRC}/${doc} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
