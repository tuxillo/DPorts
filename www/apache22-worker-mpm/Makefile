# $FreeBSD: ports/www/apache22-worker-mpm/Makefile,v 1.5 2012/11/17 06:02:28 svnexp Exp $

MASTERDIR=		${.CURDIR}/../apache22

MAINTAINER=		apache@FreeBSD.org

WITH_MPM=		worker

LATEST_LINK=		apache22-${WITH_MPM}-mpm
DESCR=			${.CURDIR}/pkg-descr

PORT_OPTIONS+=		CGID
OPTIONS_EXCLUDE=	CGI
OPTIONS_UNSET+=		CGI

.include "${MASTERDIR}/Makefile"
