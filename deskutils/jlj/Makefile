# New ports collection makefile for:	jlj
# Date created:				29 April 2001
# Whom:					Pete Fritchman <petef@databits.net>
#
# $FreeBSD: ports/deskutils/jlj/Makefile,v 1.17 2012/11/17 05:55:28 svnexp Exp $
#

PORTNAME=	jlj
PORTVERSION=	2.12
CATEGORIES=	deskutils net
MASTER_SITES=	http://umlautllama.com/projects/perl/ \
		http://www.atarininja.org/~wxs/distfiles/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Jerry's command-line LiveJournal.com entry system

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_PERL5_RUN=	yes
NO_BUILD=	yes
SUB_FILES=	pkg-message

PLIST_FILES=	bin/jlj share/examples/jlj/dot.livejournal.rc
PLIST_DIRS=	share/examples/jlj

.if !defined(NOPORTDOCS)
PORTDOCS=	README
.endif

post-patch:
	@${REINPLACE_CMD} -e 's!/usr/bin/perl!${PERL}!' ${WRKSRC}/jlj.pl

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/jlj.pl ${PREFIX}/bin/jlj
	@${MKDIR} ${PREFIX}/share/examples/jlj
	${INSTALL_DATA} ${WRKSRC}/.livejournal.rc \
		${PREFIX}/share/examples/jlj/dot.livejournal.rc
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.JLJ ${DOCSDIR}/README
.endif
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
