# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: ports/archivers/p5-Archive-Extract/Makefile,v 1.36 2013/01/10 15:42:03 svnexp Exp $

PORTNAME=	Archive-Extract
PORTVERSION=	0.62
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generic archive extracting mechanism

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

MAKE_JOBS_SAFE=	yes
PERL_CONFIGURE=	yes

MAN3=		Archive::Extract.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
BUILD_DEPENDS+=	p5-IPC-Cmd>=0.64:${PORTSDIR}/devel/p5-IPC-Cmd
RUN_DEPENDS+=	p5-IPC-Cmd>=0.64:${PORTSDIR}/devel/p5-IPC-Cmd
.endif

.include <bsd.port.post.mk>
