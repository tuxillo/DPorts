# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/devel/p5-MooX-Types-MooseLike/Makefile,v 1.12 2012/12/04 09:55:55 svnexp Exp $

PORTNAME=	MooX-Types-MooseLike
PORTVERSION=	0.16
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Some Moosish types and a typer builder

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Module-Runtime>=0.012:${PORTSDIR}/devel/p5-Module-Runtime \
		p5-Moo>=0.091010:${PORTSDIR}/devel/p5-Moo
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Set-Object>=1:${PORTSDIR}/devel/p5-Set-Object \
		p5-Test-Fatal>=0.003:${PORTSDIR}/devel/p5-Test-Fatal

PERL_CONFIGURE=	yes

MAN3=		MooX::Types::MooseLike.3 \
		MooX::Types::MooseLike::Base.3 \
		MooX::Types::MooseLike::Numeric.3 \
		MooX::Types::SetObject.3

post-patch:
	@${REINPLACE_CMD} -e '/NAME/ s|MooX-Types-MooseLike|MooX::Types::MooseLike|' ${WRKSRC}/Makefile.PL

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
TEST_DEPENDS+=	p5-Test-Simple>=0.96:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
