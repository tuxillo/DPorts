# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: ports/devel/p5-Git-Repository/Makefile,v 1.16 2012/12/05 18:31:36 svnexp Exp $

PORTNAME=	Git-Repository
PORTVERSION=	1.29
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BOOK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to Git repositories

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	${LOCALBASE}/bin/git:${PORTSDIR}/devel/git \
		p5-System-Command>=1.05:${PORTSDIR}/devel/p5-System-Command
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Pod>=1.22:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1.08:${PORTSDIR}/devel/p5-Test-Pod-Coverage

PERL_CONFIGURE=	yes

MAN3=		Git::Repository.3 \
		Git::Repository::Command.3 \
		Git::Repository::Log.3 \
		Git::Repository::Log::Iterator.3 \
		Git::Repository::Plugin.3 \
		Git::Repository::Plugin::Log.3 \
		Git::Repository::Tutorial.3 \
		Test::Git.3

.include <bsd.port.mk>
