# New ports collection makefile for:	HTTP::Router
# Date created:		22 Jan 2009
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-HTTP-Router/Makefile,v 1.6 2012/11/17 06:02:51 svnexp Exp $
#

PORTNAME=	HTTP-Router
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension of Yet Another Path Router for HTTP

BUILD_DEPENDS=	\
	p5-Class-Accessor>0:${PORTSDIR}/devel/p5-Class-Accessor \
	p5-Devel-Caller-Perl>0:${PORTSDIR}/devel/p5-Devel-Caller-Perl \
	p5-Filter>0:${PORTSDIR}/devel/p5-Filter \
	p5-Hash-AsObject>0:${PORTSDIR}/devel/p5-Hash-AsObject \
	p5-Lingua-EN-Inflect-Number>0:${PORTSDIR}/textproc/p5-Lingua-EN-Inflect-Number \
	p5-List-MoreUtils>0:${PORTSDIR}/lang/p5-List-MoreUtils \
	p5-String-CamelCase>0:${PORTSDIR}/textproc/p5-String-CamelCase \
	p5-Text-SimpleTable>=0:${PORTSDIR}/textproc/p5-Text-SimpleTable \
	p5-Text-SimpleTemplate>0:${PORTSDIR}/textproc/p5-Text-SimpleTemplate \
	p5-URI-Template-Restrict>=0.05:${PORTSDIR}/net/p5-URI-Template-Restrict
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		HTTP::README.3 \
		HTTP::Router.3 \
		HTTP::Router::Debug.3 \
		HTTP::Router::Declare.3 \
		HTTP::Router::Match.3 \
		HTTP::Router::Route.3 \
		Test::HTTP::Router.3

.include <bsd.port.mk>
