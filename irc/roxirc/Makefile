# Created by: rox@fearme.com
# $FreeBSD: ports/irc/roxirc/Makefile,v 1.20 2012/11/26 23:00:52 svnexp Exp $

PORTNAME=	roxirc
PORTVERSION=	2.0
PORTREVISION=	2
CATEGORIES=	irc tk
MASTER_SITES=	http://roxirc.lighter.net/download/

MAINTAINER=	tcltk@FreeBSD.org
COMMENT=	A tcl/tk irc client

USE_TK=		yes
NO_BUILD=	yes

post-patch:
	@${REINPLACE_CMD} 's|if \[ -x .*|${WISH} "$$0" "$$@"|' ${WRKSRC}/roxirc

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/roxirc ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/config ${DOCSDIR}/config-example
	${INSTALL_DATA} ${WRKSRC}/menus ${DOCSDIR}/menus-example
	${INSTALL_DATA} ${WRKSRC}/bindings ${DOCSDIR}/bindings-example
	${INSTALL_DATA} ${WRKSRC}/prefs ${DOCSDIR}/prefs-initial
	${INSTALL_DATA} ${WRKSRC}/startup ${DOCSDIR}/startup-example
	${INSTALL_DATA} ${WRKSRC}/help ${DOCSDIR}/help
.endif

.include <bsd.port.mk>
