# New ports collection makefile for:	Path-Dispatcher
# Date created:		2011-04-05
# Whom:			Baptiste Daroussin <bapt@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Path-Dispatcher/Makefile,v 1.8 2012/12/17 12:44:00 svnexp Exp $
#

PORTNAME=	Path-Dispatcher
PORTVERSION=	1.04
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SARTAK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl flexible and extensible dispatch

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Any-Moose>=0.12:${PORTSDIR}/devel/p5-Any-Moose \
		p5-Try-Tiny>=0.02:${PORTSDIR}/lang/p5-Try-Tiny
RUN_DEPENDS=	p5-Any-Moose>=0.12:${PORTSDIR}/devel/p5-Any-Moose \
		p5-Try-Tiny>=0.02:${PORTSDIR}/lang/p5-Try-Tiny

TEST_DEPENDS=	p5-Test-Fatal>=0:${PORTSDIR}/devel/p5-Test-Fatal

PERL_CONFIGURE=	yes

MAN3=	Path::Dispatcher::Path.3 \
	Path::Dispatcher::Rule::Tokens.3 \
	Path::Dispatcher::Rule::Sequence.3 \
	Path::Dispatcher::Rule::Dispatch.3 \
	Path::Dispatcher::Role::Rules.3 \
	Path::Dispatcher::Rule::Eq.3 \
	Path::Dispatcher.3 \
	Path::Dispatcher::Match.3 \
	Path::Dispatcher::Rule::CodeRef.3 \
	Path::Dispatcher::Rule::Metadata.3 \
	Path::Dispatcher::Rule::Enum.3 \
	Path::Dispatcher::Rule::Empty.3 \
	Path::Dispatcher::Cookbook.3 \
	Path::Dispatcher::Rule::Under.3 \
	Path::Dispatcher::Rule.3 \
	Path::Dispatcher::Rule::Intersection.3 \
	Path::Dispatcher::Rule::Alternation.3 \
	Path::Dispatcher::Rule::Always.3 \
	Path::Dispatcher::Rule::Regex.3 \
	Path::Dispatcher::Dispatch.3

.include <bsd.port.mk>
