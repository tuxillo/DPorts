# New ports collection makefile for:	twiki-MathModePlugin
# Date created:		17 Jun 2008
# Whom:			Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/www/twiki-MathModePlugin/Makefile,v 1.4 2012/11/17 06:03:09 svnexp Exp $
#

PORTNAME=	MathModePlugin
SVNREV=		15934
MASTER_SITES=	http://protey.ru/freebsd/distfiles/ \
		${MASTER_SITE_LOCAL:S!$!skv/!}

MAINTAINER=	skv@FreeBSD.org
COMMENT=	Include LaTeX formatted math in your TWiki pages

RUN_DEPENDS=	dvipng:${PORTSDIR}/print/teTeX-base \
		latex:${PORTSDIR}/print/teTeX-base \
		convert:${PORTSDIR}/graphics/ImageMagick

post-patch:
	${REINPLACE_CMD} -i '' -e 's!=/usr/bin!=${LOCALBASE}/bin!g; s!=/bin!=/usr/bin!g;' \
		${WRKSRC}/pub/TWiki/MathModePlugin/latex2img

.include "${.CURDIR}/../twiki/bsd.twiki.mk"
.include <bsd.port.mk>
