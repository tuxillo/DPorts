# New ports collection makefile for:	DBIx-Class-InflateColumn-IP
# Date created:		23 Oct 2008
# Whom:			Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/databases/p5-DBIx-Class-InflateColumn-IP/Makefile,v 1.5 2012/11/17 05:55:15 svnexp Exp $
#

PORTNAME=	DBIx-Class-InflateColumn-IP
PORTVERSION=	0.02002
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Component to auto-create NetAddr::IP objects from columns

BUILD_DEPENDS=	p5-DBIx-Class>=0.06002:${PORTSDIR}/databases/p5-DBIx-Class \
		p5-NetAddr-IP>=4.00.7:${PORTSDIR}/net-mgmt/p5-NetAddr-IP
RUN_DEPENDS=	p5-DBIx-Class>=0.06002:${PORTSDIR}/databases/p5-DBIx-Class \
		p5-NetAddr-IP>=4.00.7:${PORTSDIR}/net-mgmt/p5-NetAddr-IP
TEST_DEPENDS=	p5-DBD-SQLite>=0:${PORTSDIR}/databases/p5-DBD-SQLite

PERL_CONFIGURE=	yes

MAN3=	DBIx::Class::InflateColumn::IP.3

.include <bsd.port.mk>
