# New ports collection makefile for: webcheck
# Date created:        10 May, 2002
# Whom:                Mike Meyer <mwm@mired.org>
#
# $FreeBSD: ports/www/webcheck/Makefile,v 1.22 2012/11/17 06:03:10 svnexp Exp $
#

PORTNAME=	webcheck
PORTVERSION=	1.10.3
CATEGORIES=	www python
MASTER_SITES=	http://arthurdejong.org/webcheck/
EXTRACT_SUFX=	.tar.gz

MAINTAINER=	reed@reedmedia.net
COMMENT=	View structure of a web site, get a list of problems like broken links

USE_PYTHON=	yes
NO_BUILD=	yes

MAN1=		webcheck.1

# what about fancytooltips?

do-install:
	@${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/*.py ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/*.css ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/favicon.ico ${DATADIR}
.for d in parsers parsers/html plugins schemes
	@${MKDIR} ${DATADIR}/${d}
	${INSTALL_DATA} ${WRKSRC}/${d}/*.py ${DATADIR}/${d}
.endfor
	@${MKDIR} ${DATADIR}/fancytooltips
	${INSTALL_DATA} ${WRKSRC}/fancytooltips/* ${DATADIR}/fancytooltips
	${INSTALL_SCRIPT} ${WRKSRC}/webcheck.py ${DATADIR}
	${LN} -sf ${DATADIR}/webcheck.py ${PREFIX}/bin/webcheck
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif
	@${INSTALL_MAN} ${WRKSRC}/webcheck.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
