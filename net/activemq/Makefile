# $FreeBSD: ports/net/activemq/Makefile,v 1.9 2012/12/09 00:31:45 svnexp Exp $
#

PORTNAME=	activemq
PORTVERSION=	5.7.0
CATEGORIES=	net java
MASTER_SITES=	http://www.sai.msu.su/apache/${MASTER_SITE_SUBDIR}/ \
		${MASTER_SITE_APACHE}/${MASTER_SITE_SUBDIR}/
MASTER_SITE_SUBDIR=${PORTNAME}/apache-${PORTNAME}/${PORTVERSION}
DISTNAME=	apache-${PORTNAME}-${PORTVERSION}-bin

MAINTAINER=	tj@freebsd.org
COMMENT=	Messaging and Integration Patterns provider

NO_BUILD=	yes

USE_JAVA=	yes
LICENSE=	AL2
JAVA_VERSION=	1.6+
MQDATA=		${PREFIX}/lib/${PORTNAME}
MQDB?=		/var/db/activemq
DATADIR=	${MQDATA}
MQUSER?=	activemq
MQGROUP?=	${MQUSER}
USERS=		${MQUSER}
GROUPS=		${MQGROUP}
CAMELVERSION=	2.10.1
SPRINGVERSION=	3.0.7
SPRINGVERSION=	3.0.7
JETTYVERSION=	7.6.7.v20120910
LVDBVERSION=	0.2
LVDBJNIVERSION=	1.3

ALL_TARGET=	${PORTNAME}
USE_RC_SUBR=	${PORTNAME}

PORTDOCS=	LICENSE NOTICE README.txt WebConsole-README.txt user-guide.html
ETC_FILES=	activemq-command.xml \
		activemq-demo.xml \
		activemq-dynamic-network-broker1.xml \
		activemq-dynamic-network-broker2.xml \
		activemq-jdbc.xml \
		activemq-scalability.xml \
		activemq-security.xml \
		activemq-specjms.xml \
		activemq-static-network-broker1.xml \
		activemq-static-network-broker2.xml \
		activemq-stomp.xml \
		activemq-throughput.xml \
		activemq.xml \
		camel.xml \
		credentials-enc.properties \
		credentials.properties \
		jetty-realm.properties \
		jetty.xml \
		jmx.access \
		jmx.password \
		log4j.properties \
		logging.properties

WRKSRC=		${WRKDIR}/apache-${PORTNAME}-${PORTVERSION}
SUB_FILES=	pkg-install pkg-deinstall
SUB_LIST=	ETC_FILES="${ETC_FILES}" \
		MQUSER="${MQUSER}" \
		MQGROUP="${MQGROUP}" \
		MQDB="${MQDB}"
PLIST_SUB=	MQUSER="${MQUSER}" \
		MQGROUP="${MQGROUP}" \
		MQDB="${MQDB}" \
		PORTVERSION="${PORTVERSION}" \
		CAMELVERSION="${CAMELVERSION}" \
		SPRINGVERSION="${SPRINGVERSION}" \
		JETTYVERSION="${JETTYVERSION}" \
		LVDBVERSION="${LVDBVERSION}" \
		LVDBJNIVERSION="${LVDBJNIVERSION}"

.include <bsd.port.options.mk>

do-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	@cd ${WRKSRC} && ${COPYTREE_SHARE} docs ${DOCSDIR}/
.for f in ${PORTDOCS}
	@${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}/
.endfor
.endif

	@${MKDIR} ${MQDATA} ${MQDB} ${MQDATA}/bin ${ETCDIR}
	@cd ${WRKSRC} && ${COPYTREE_SHARE} example ${EXAMPLESDIR}/

.for f in ${ETC_FILES}
	${INSTALL_DATA} ${WRKSRC}/conf/${f} ${ETCDIR}/${f}.sample
.endfor

.for f in ${PORTNAME} ${PORTNAME}-admin diag
	@cd ${WRKSRC}/bin && ${INSTALL_SCRIPT} ${f} ${MQDATA}/bin
.endfor

	@cd ${WRKSRC}/bin && ${INSTALL_DATA} run.jar ${MQDATA}/bin

.for f in webapps lib
	@cd ${WRKSRC} && ${COPYTREE_SHARE} ${f} ${MQDATA}
.endfor

	@${LN} -sf ${MQDB} ${MQDATA}/data
	@${LN} -sf ${ETCDIR} ${MQDATA}/conf
	@${LN} -sf ${EXAMPLESDIR}/example ${MQDATA}/example
	@${CHOWN} -Rh ${MQUSER}:${MQGROUP} ${MQDB} ${ETCDIR} ${EXAMPLES} \
		${MQDATA}

post-install:
	@${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL
	${INSTALL} -d -o ${MQUSER} -g ${MQGROUP} ${MQDB}

.include <bsd.port.mk>
