# Created by: JunSeon Oh <hollywar@mail.holywar.net>
# $FreeBSD: ports/www/mod_fastcgi/Makefile,v 1.33 2012/11/17 06:02:40 svnexp Exp $

PORTNAME=	mod_fastcgi
PORTVERSION=	2.4.6
PORTREVISION=	3
CATEGORIES=	www
MASTER_SITES=	http://www.fastcgi.com/dist/

MAINTAINER=	apache@FreeBSD.org
COMMENT=	A fast-cgi module for Apache

MAKE_JOBS_SAFE=	yes

CONFLICTS=	apache-contrib-1.*
USE_APACHE=	22
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SRC_FILE=	*.c
PORTDOCS=	LICENSE.TERMS mod_fastcgi.html

do-install:
	@${APXS} -i -a -n ${SHORTMODNAME} ${WRKSRC}/${MODULENAME}.${AP_BUILDEXT}

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/docs/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
