# $FreeBSD: ports/japanese/bugzilla42/Makefile,v 1.7 2012/11/22 20:22:05 svnexp Exp $

PORTNAME=	bugzilla
PORTVERSION=	4.2.4
CATEGORIES=	japanese
MASTER_SITES=	http://bug-ja.org/releases/4.2/ \
		LOCAL
MASTER_SITE_SUBDIR=	tota/bugzilla-ja
DISTNAME=	Bugzilla-ja-${PORTVERSION}-template

MAINTAINER=	bugzilla@FreeBSD.org
COMMENT=	Japanese localization for Bugzilla

RUN_DEPENDS=	bugzilla>=${PORTVERSION}:${PORTSDIR}/devel/bugzilla42

LATEST_LINK=	${PKGNAMEPREFIX}bugzilla42

NO_WRKSUBDIR=	yes

.include "${.CURDIR}/../../devel/bugzilla42/Makefile.common"

USE_BZIP2=	yes

LANGDIR=	${WWWDIR}/template/ja

do-install:
	@-${MKDIR} ${LANGDIR}/default
	@cd ${WRKDIR}/default; ${COPYTREE_SHARE} . ${LANGDIR}/default
.if !defined(BATCH)
	@${ECHO_MSG}
	@${CAT} ${PKGMESSAGE}
	@${ECHO_MSG}
.endif

# Maintainer
plist: patch
	@( cd ${WRKDIR}/ && ${FIND} default -type f | ${AWK} '{print "%%WWWDIR%%/template/ja/"$$1}' | ${SORT} > ${PLIST}.new )
	@( cd ${WRKDIR}/ && ${FIND} default -type d | ${AWK} '{print "@dirrmtry %%WWWDIR%%/template/ja/"$$1}' | ${SORT} -r >> ${PLIST}.new )
	@${ECHO} "@dirrmtry %%WWWDIR%%/template/ja" >> ${PLIST}.new
	@if ${DIFF} -u ${PLIST} ${PLIST}.new ; then \
		${ECHO_MSG} no pkg-plist changes; \
		${RM} ${PLIST}.new ; \
	fi

.include <bsd.port.mk>
