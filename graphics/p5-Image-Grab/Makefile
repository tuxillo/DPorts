# New ports collection makefile for:	Image-Grab
# Date created:				8 April 2001
# Whom:					Anatoliy Dmytriyev <tolid@plab.ku.dk>
#
# $FreeBSD: ports/graphics/p5-Image-Grab/Makefile,v 1.14 2012/11/17 05:58:17 svnexp Exp $
#

PORTNAME=	Image-Grab
PORTVERSION=	1.4.2
PORTREVISION=	3
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tolid@plab.ku.dk
COMMENT=	Perl extension for Grabbing images off the Internet

BUILD_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-HTML-Tree>=0:${PORTSDIR}/www/p5-HTML-Tree \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
CONFIGURE_ENV=	${ECHO_CMD} "N" |

MAN3=		Image::Grab.3

.include <bsd.port.mk>
