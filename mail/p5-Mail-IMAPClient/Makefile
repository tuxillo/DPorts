# New ports collection makefile for:	p5-Mail-IMAPClient
# Date created:		14 Nov 2000
# Whom:			TAKAHASHI Kaoru <kaoru@kaisei.org>
#
# $FreeBSD: ports/mail/p5-Mail-IMAPClient/Makefile,v 1.47 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	Mail-IMAPClient
PORTVERSION=	3.32
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PLOBBES
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Perl5 module to talk to a IMAP4rev1 (RFC2060) server

RUN_DEPENDS=	p5-Digest-HMAC>=0:${PORTSDIR}/security/p5-Digest-HMAC \
		p5-Parse-RecDescent>=1.94:${PORTSDIR}/devel/p5-Parse-RecDescent \
		p5-IO-Socket-SSL>=0:${PORTSDIR}/security/p5-IO-Socket-SSL \
		p5-Authen-SASL>=0:${PORTSDIR}/security/p5-Authen-SASL

PERL_CONFIGURE=	yes
CONFIGURE_ARGS=	</dev/null

MAN3=	Mail::IMAPClient.3 \
	Mail::IMAPClient::BodyStructure.3 \
	Mail::IMAPClient::BodyStructure::Parse.3 \
	Mail::IMAPClient::MessageSet.3 \
	Mail::IMAPClient::Thread.3

.include <bsd.port.mk>
