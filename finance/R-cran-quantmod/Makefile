# New ports collection makefile for:	R-cran-quantmod
# Date created:		2011-10-30
# Whom:			TAKATSU Tomonari <tota@FreeBSD.org>
#
# $FreeBSD: ports/finance/R-cran-quantmod/Makefile,v 1.4 2012/11/17 05:57:25 svnexp Exp $
#

PORTNAME=	quantmod
DISTVERSION=	0.3-17
PORTREVISION=	2
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Quantitative Financial Modelling and Trading Framework for R

LICENSE=	GPLv3

RUN_DEPENDS=	R-cran-Defaults>0:${PORTSDIR}/devel/R-cran-Defaults \
		R-cran-xts>=0.7.5:${PORTSDIR}/math/R-cran-sp \
		R-cran-zoo>0:${PORTSDIR}/math/R-cran-zoo \
		R-cran-TTR>=0.2:${PORTSDIR}/finance/R-cran-TTR

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
