# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/ftp/R-cran-RCurl/Makefile,v 1.18 2012/11/17 05:57:28 svnexp Exp $

PORTNAME=	RCurl
DISTVERSION=	1.95-3
CATEGORIES=	ftp
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	General network client interface for R

LICENSE=	BSD

BUILD_DEPENDS=	curl-config:${PORTSDIR}/ftp/curl
RUN_DEPENDS=	R-cran-bitops>0:${PORTSDIR}/devel/R-cran-bitops
LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
