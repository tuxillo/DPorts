# New ports collection makefile for:	www/p5-URI-Fetch
# Date created:				30 July 2005
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-URI-Fetch/Makefile,v 1.21 2012/12/17 12:28:02 svnexp Exp $
#

PORTNAME=	URI-Fetch
PORTVERSION=	0.090
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Smart URI fetching/caching

RUN_DEPENDS=	p5-Class-ErrorHandler>=0:${PORTSDIR}/devel/p5-Class-ErrorHandler \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

OPTIONS_DEFINE=	ZLIB CACHE
OPTIONS_DEFAULT=	ZLIB

ZLIB_DESC=	GZIP Support
CACHE_DESC=	Caching Support

PERL_CONFIGURE=	yes

MAN3=	URI::Fetch.3 \
	URI::Fetch::Response.3

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MCACHE}
RUN_DEPENDS+=	p5-Cache>=0:${PORTSDIR}/devel/p5-Cache
.endif

post-patch:
	${PERL} -pi -e '$$_ = "" if m|auto_install|' ${WRKSRC}/Makefile.PL

.include <bsd.port.post.mk>
