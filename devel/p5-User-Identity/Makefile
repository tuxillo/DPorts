# New ports collection makefile for:	p5-User-Identity
# Date created:				21 Jul 2005
# Whom:					Max Campos <mcampos@bpsw.biz>
#
# $FreeBSD: ports/devel/p5-User-Identity/Makefile,v 1.7 2012/11/17 05:56:36 svnexp Exp $
#

PORTNAME=	User-Identity
PORTVERSION=	0.93
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mcampos@bpsw.biz
COMMENT=	Perl module for abstracting information about a physical person

RUN_DEPENDS=	p5-Geography-Countries>=0:${PORTSDIR}/misc/p5-Geography-Countries

PERL_CONFIGURE=	yes

MAN3=		Mail::Identity.3 \
		User::Identity.3 \
		User::Identity::Archive.3 \
		User::Identity::Archive::Plain.3 \
		User::Identity::Collection.3 \
		User::Identity::Collection::Emails.3 \
		User::Identity::Collection::Locations.3 \
		User::Identity::Collection::Systems.3 \
		User::Identity::Collection::Users.3 \
		User::Identity::Item.3 \
		User::Identity::Location.3 \
		User::Identity::System.3

.include <bsd.port.mk>
