# New ports collection makefile for:	POE-Component-Client-FTP
# Date created:	   17 March 2002
# Whom:		   Sergey Skvortsov <skv@FreeBSD.org>
#
# $FreeBSD: ports/ftp/p5-POE-Component-Client-FTP/Makefile,v 1.11 2012/11/17 05:57:30 svnexp Exp $
#

PORTNAME=	POE-Component-Client-FTP
PORTVERSION=	0.22
CATEGORIES=	ftp perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implements an FTP client POE Component

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
CONFIGURE_ENV=	PERL_MM_USE_DEFAULT=yes

MAN3=		POE::Component::Client::FTP.3

post-patch:
	@${PERL} -pi -e '$$_="" if /^use warnings/; s/\x0d(?=\x0a)//;' \
		${WRKSRC}/FTP.pm

post-install:
.ifndef(NOPORTDOCS)
	@${ECHO_MSG} "===>   Installing examples for ${PKGNAME}"
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/examples/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
