# Created by: Brooks Davis <brooks@freebsd.org>
# $FreeBSD: ports/www/trac-fullblog/Makefile,v 1.10 2012/11/17 06:03:08 svnexp Exp $

PORTNAME=	${PYDISTUTILS_PKGNAME:S;^Trac;;S;Plugin$;;:tl}
PORTVERSION=	0.1.1
PORTREVISION=	1
CATEGORIES=	www devel python
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	brooks
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}
DIST_SUBDIR=	trac

MAINTAINER=	brooks@FreeBSD.org
COMMENT=	Plugin that provides a project Blog

RUN_DEPENDS+=	htmldoc:${PORTSDIR}/textproc/htmldoc \
		tracd:${PORTSDIR}/www/trac

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TracFullBlogPlugin

.if defined(BOOTSTRAP)
do-fetch:
	${MKDIR} ${WRKDIR}
	svn export http://trac-hacks.org/svn/fullblogplugin/0.11/ ${WRKSRC}
	${MKDIR} ${_DISTDIR}
	cd ${WRKDIR} && \
	    tar cfvz ${_DISTDIR}/${DISTNAME}.tar.gz ${DISTNAME}
.endif

build-plist:
	@${CAT} /dev/null > ${PLIST}
	${FIND} ${EGG_PATH} -type f | \
	    ${SED} -e 's|${EGG_PATH}|%%PYTHON_SITELIBDIR%%/${PYDISTUTILS_PKGNAME}-%%PORTVERSION%%-py%%PYTHON_VER%%.egg|' | \
	    ${SORT} >> ${PLIST}
	${FIND} ${EGG_PATH} -type d | \
	    ${SED} -e 's|${EGG_PATH}|@dirrm %%PYTHON_SITELIBDIR%%/${PYDISTUTILS_PKGNAME}-%%PORTVERSION%%-py%%PYTHON_VER%%.egg|' | \
	    ${SORT} -r >> ${PLIST}

.include <bsd.port.mk>
