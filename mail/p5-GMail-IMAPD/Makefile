# New ports collection makefile for:	GMail-IMAPD
# Date created:				Jun 4, 2007
# Whom:					Ali Mashtizadeh <ali@mashtizadeh.org>
#
# $FreeBSD: ports/mail/p5-GMail-IMAPD/Makefile,v 1.6 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	GMail-IMAPD
PORTVERSION=	0.94
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mashtizadeh@gmail.com
COMMENT=	Perl IMAP4 gateway to Google's webmail service

BUILD_DEPENDS=	p5-Mail-Webmail-Gmail>=0:${PORTSDIR}/mail/p5-Mail-Webmail-Gmail
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		GMail::IMAPD.3

.include <bsd.port.mk>
