# New ports collection makefile for:	p5-SVN-Access
# Date created:		2008-02-11
# Whom:			Greg Larkin <glarkin@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-SVN-Access/Makefile,v 1.15 2012/11/17 05:56:28 svnexp Exp $
#

PORTNAME=	SVN-Access
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	Perl extension to manipulate SVN Access files

BUILD_DEPENDS=	p5-subversion>=0:${PORTSDIR}/devel/p5-subversion \
		p5-Tie-IxHash>=1.21:${PORTSDIR}/devel/p5-Tie-IxHash
RUN_DEPENDS=	p5-subversion>=0:${PORTSDIR}/devel/p5-subversion \
		p5-Tie-IxHash>=1.21:${PORTSDIR}/devel/p5-Tie-IxHash

PERL_CONFIGURE=	yes

MAN3=		SVN::Access.3 \
		SVN::Access::Group.3 \
		SVN::Access::Resource.3

.if !defined(NOPORTEXAMPLES)
post-install:
	@cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${EXAMPLESDIR}
	@${FIND} ${EXAMPLESDIR} -name \*.pl -type f -print0 | \
		${XARGS} -0 ${CHMOD} 755
	@${ECHO_CMD} '@exec ${FIND} ${EXAMPLESDIR} -name \*.pl -type f -print0 | \
		${XARGS} -0 ${CHMOD} 755' >> ${TMPPLIST}
.endif

.include <bsd.port.mk>
