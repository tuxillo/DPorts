# New ports collection makefile for:   subversion-ruby
# Date Created:                4 July 2005
# Whom:                        Hiroyuki Iwatsuki <don@na.rim.or.jp>
#
# $FreeBSD: ports/devel/ruby-subversion/Makefile,v 1.16 2012/11/17 05:56:58 svnexp Exp $
#

PKGNAMEPREFIX=	ruby-

MAINTAINER=	lev@FreeBSD.org
COMMENT=	Ruby bindings for version control system

.if defined(WITH_SUBVERSION_VER) && ${WITH_SUBVERSION_VER} == 16
MASTERDIR=	${.CURDIR}/../../devel/subversion16
.else
MASTERDIR=	${.CURDIR}/../../devel/subversion
.endif
PKGDIR=		${.CURDIR}

CONFIGURE_ENV+=	PTHREAD_LIBS=${PTHREAD_LIBS}

USE_RUBY=		yes

SVN_BUILD_BINDINGS=yes

.include "${MASTERDIR}/Makefile.common"

CATEGORIES+=	ruby

do-build:
	cd ${WRKSRC} ; ${MAKE} swig-rb-lib ; ${MAKE} swig-rb

do-install:
	cd ${WRKSRC} ; ${MAKE} install-swig-rb

.if ${RUBY_VER} == 1.9
BROKEN=	does not work with ruby 1.9
.endif

.include <bsd.port.post.mk>
