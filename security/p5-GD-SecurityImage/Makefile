# Created by: ports@rbt.ca
# $FreeBSD: ports/security/p5-GD-SecurityImage/Makefile,v 1.27 2012/11/17 06:01:13 svnexp Exp $

PORTNAME=	GD-SecurityImage
PORTVERSION=	1.72
PORTEPOCH=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module for creating CAPTCHA security images

BUILD_DEPENDS=	p5-GD>=0:${PORTSDIR}/graphics/p5-GD
RUN_DEPENDS=	p5-GD>=0:${PORTSDIR}/graphics/p5-GD

OPTIONS_DEFINE=	IMAGEMAGICK
IMAGEMAGICK_DESC=	Build ImageMagick module

PORTSCOUT=	skipv:1.581

PERL_CONFIGURE=	yes

MAN3=		GD::SecurityImage.3 \
		GD::SecurityImage::GD.3 \
		GD::SecurityImage::Magick.3 \
		GD::SecurityImage::Styles.3

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MIMAGEMAGICK}
BUILD_DEPENDS+=	convert:${PORTSDIR}/graphics/ImageMagick
RUN_DEPENDS+=	convert:${PORTSDIR}/graphics/ImageMagick
.endif

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
BUILD_DEPENDS+=	p5-Module-Build>=0.3800:${PORTSDIR}/devel/p5-Module-Build
.endif

.include <bsd.port.post.mk>
