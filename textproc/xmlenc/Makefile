# New ports collection makefile for:	JUMP Ultimate Math Package
# Date created:				June 13, 2002
# Whom:					Ernst de Haan <znerd@FreeBSD.org>
#
# $FreeBSD: ports/textproc/xmlenc/Makefile,v 1.35 2012/11/17 06:02:25 svnexp Exp $
#

PORTNAME=	xmlenc
PORTVERSION=	0.52
PORTREVISION=	2
CATEGORIES=	textproc java
MASTER_SITES=	SF
EXTRACT_SUFX=	.tgz

MAINTAINER=	hq@FreeBSD.org
COMMENT=	Light-weight XML encoding library for Java

USE_JAVA=	yes
USE_ANT=	yes

.if defined(NOPORTDOCS)
ALL_TARGET=	jar
.else
ALL_TARGET=	jar javadoc
PORTDOCS=	*
.endif
JARFILE=	${PORTNAME}.jar
PLIST_FILES=	%%JAVAJARDIR%%/${JARFILE}

.include <bsd.port.pre.mk>

JDK_API!=	(${FIND} -s ${LOCALBASE}/share/doc/jdk1.? -maxdepth 1 -name api -type d 2>/dev/null || ${TRUE}) | ${TAIL} -n 1 ; echo
.if ${JDK_API} != ""
MAKE_ARGS+=	-Djavadoc.srcdir.j2se=${JDK_API}

do-configure:
	${REINPLACE_CMD} -e 's,http://java.sun.com/j2se/1.3/docs/api,${JDK_API},' ${WRKSRC}/build.xml
.endif

do-install:
	@${ECHO_MSG} -n ">> Installing JAR as ${JAVAJARDIR}/${JARFILE}..."
	@${INSTALL_DATA} ${WRKSRC}/build/${JARFILE} ${JAVAJARDIR}/
	@${ECHO_MSG} " [ DONE ]"

.if !defined(NOPORTDOCS)
	@${ECHO_MSG} -n ">> Installing documentation in ${DOCSDIR}/..."
	@cd ${WRKSRC}/build/javadoc/ \
	  && ${FIND} . -type d -exec ${MKDIR} ${DOCSDIR}/{} \; \
	  && ${FIND} . -type f -exec ${INSTALL_DATA} {} ${DOCSDIR}/{} \;
	@${ECHO_MSG} " [ DONE ]"
.endif

.include <bsd.port.post.mk>
