# New ports collection makefile for:	p5-Catalyst-TraitFor-Controller-DBIC-DoesPaging
# Date created:		2010-07-28
# Whom:			Alex Bakhtin <Alex.Bakhtin@gmail.com>
#
# $FreeBSD: ports/www/p5-Catalyst-TraitFor-Controller-DBIC-DoesPaging/Makefile,v 1.4 2012/11/17 06:02:47 svnexp Exp $
#

PORTNAME=	Catalyst-TraitFor-Controller-DBIC-DoesPaging
PORTVERSION=	1.001000
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	Alex.Bakhtin@gmail.com
COMMENT=	Helps you paginate, search, sort, and more easily using DBIx::Class

BUILD_DEPENDS=	p5-Catalyst-Model-DBIC-Schema>=0.29:${PORTSDIR}/www/p5-Catalyst-Model-DBIC-Schema \
		p5-Catalyst-Runtime>=5.80000:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-DBIx-Class>=0.08108:${PORTSDIR}/databases/p5-DBIx-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Catalyst-View-JSON>=0:${PORTSDIR}/www/p5-Catalyst-View-JSON \
		p5-DBD-SQLite>=0:${PORTSDIR}/databases/p5-DBD-SQLite \
		p5-JSON>=0:${PORTSDIR}/converters/p5-JSON \
		p5-SQL-Translator>=0:${PORTSDIR}/databases/p5-SQL-Translator \
		p5-Test-Deep>=0:${PORTSDIR}/devel/p5-Test-Deep

PERL_CONFIGURE=	yes

MAN3=		Catalyst::TraitFor::Controller::DBIC::DoesPaging.3

.include <bsd.port.mk>
