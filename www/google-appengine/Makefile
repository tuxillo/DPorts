# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: ports/www/google-appengine/Makefile,v 1.40 2012/11/17 06:02:34 svnexp Exp $

PORTNAME=	google-appengine
PORTVERSION=	1.7.2
PORTREVISION=	0
CATEGORIES=	www devel python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DISTFILES=	${PORTNAME:S|-|_|}_${PORTVERSION}.zip

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Development tools for Google App Engine (SDK)

LICENSE=	AL2 BSD GPLv2 LGPL21 MIT MPL PSFL
LICENSE_COMB=	multi

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlite3>=${PYTHON_VER}:${PORTSDIR}/databases/py-sqlite3 \
		${PYTHON_PKGNAMEPREFIX}imaging>=1.1.6_2:${PORTSDIR}/graphics/py-imaging \
		${PYTHON_PKGNAMEPREFIX}pycrypto>=2.6:${PORTSDIR}/security/py-pycrypto

PROJECTHOST=	googleappengine

USE_PYTHON=	2.7
USE_ZIP=	yes
USE_GETTEXT=	yes

OPTIONS_DEFINE=	EXAMPLES MYSQL
OPTIONS_DEFAULT=	MYSQL

.include <bsd.port.options.mk>

WRKSRC=	${WRKDIR}/${PORTNAME:S,-,_,}

FIND_FILES=	${WRKSRC} -type f -name "*.py" -print0
FIND_FILES_BAK=	${WRKSRC} -type f -and \( -name "*.orig" -or -name "*.bak" \)

LN_OPTS=	-s

XARGS_ARGS=	-0
REINPLACE_ARGS=	-i.bak -e 's,/usr/bin/env python,&${PYTHON_VER},'

GAEDATADIR=	google lib new_project_template tools
GAESCRIPTS=	api_server appcfg bulkload_client bulkloader \
		dev_appserver download_appstats gen_protorpc \
		google_sql remote_api_shell

post-patch:
	@${FIND} ${FIND_FILES} | ${XARGS} ${XARGS_ARGS} ${REINPLACE_CMD}
	@${FIND} ${FIND_FILES_BAK} -delete

do-build:
	${PYTHON_CMD} -m compileall ${WRKSRC} || true
	${PYTHON_CMD} -OO -m compileall ${WRKSRC} || true

do-install:
	${MKDIR} ${DATADIR}
.for D in ${GAEDATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} ${D} ${DATADIR}
.endfor

.if ${PORT_OPTIONS:MEXAMPLES}
	cd ${WRKSRC} && ${COPYTREE_SHARE} demos ${EXAMPLESDIR}
.endif
.for S in ${GAESCRIPTS}
.  for EXT in py pyc pyo
	${INSTALL_SCRIPT} ${WRKSRC}/${S}.${EXT} ${DATADIR}
	${LN} ${LN_OPTS} ${DATADIR}/${S}.${EXT} ${PREFIX}/bin/${S}.${EXT}
.  endfor
.endfor
	${INSTALL_DATA} ${WRKSRC}/VERSION ${DATADIR}

.if ${PORT_OPTIONS:MMYSQL}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}MySQLdb>=1.2.3:${PORTSDIR}/databases/py-MySQLdb
.endif

.include <bsd.port.mk>
