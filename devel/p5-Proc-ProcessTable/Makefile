# Created by: Michael Johnson <ahze@ahze.net>
# $FreeBSD: ports/devel/p5-Proc-ProcessTable/Makefile,v 1.23 2012/12/14 09:59:12 svnexp Exp $

PORTNAME=	Proc-ProcessTable
PORTVERSION=	0.46
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the unix process table

PERL_CONFIGURE=	YES

MAN3=		Proc::ProcessTable::Process.3 \
		Proc::Killall.3 \
		Proc::ProcessTable.3 \
		Proc::Killfam.3
PORTDOCS=	README README.freebsd

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
