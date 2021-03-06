# New ports collection makefile for:	rabl_server
# Date created:				2005-10-25
# Whom:					Ion-Mihai "IOnut" Tetcu <itetcu@people.tecnik93.com>
#
# $FreeBSD: ports/mail/rabl_server/Makefile,v 1.10 2012/11/17 05:59:13 svnexp Exp $
#
# $Tecnik: ports/mail/rabl_server/Makefile,v 1.7 2005/12/09 19:54:50 itetcu Exp $
#

PORTNAME=	rabl_server
PORTVERSION=	1.0.0
CATEGORIES=	mail dns
MASTER_SITES=	http://www.nuclearelephant.com/projects/rabl/sources/ \
		http://sce-tindy.tecnik93.com/FreeBSD/ports/${PORTNAME}/sources/

MAINTAINER=	itetcu@FreeBSD.org
COMMENT=	Reactive Autonomous Blackhole List server

GNU_CONFIGURE=		yes
USE_LDCONFIG=		yes
LDFLAGS+=		-L${LOCALBASE}/lib

PORTDOCS=	CHANGE README RELEASE.NOTES

OPTIONS=	DEBUG "Enable DEBUG messages"	off

USE_RC_SUBR=	${PORTNAME}

RABL_GROUP?=	bind

.include <bsd.port.pre.mk>

.if defined(WITH_DEBUG)
CONFIGURE_ARGS+=	--enable-debug
CFLAGS+=		-g -DDEBUG
STRIP_CMD=		# empty
.endif

.pre-everything::
	${ECHO_CMD}
	${ECHO_CMD} "If you plan to run ${PORTNAME} as an other user that the"
	${ECHO_CMD} "default 'bind' define RABL_GROUP to the group that user belongs"
	${ECHO_CMD} "RABL_GROUP=${RABL_GROUP} (default: bind)"
	${ECHO_CMD}

post-patch:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g' ${WRKSRC}/configure

post-install:
	${INSTALL} -o ${SHAREOWN} -g ${RABL_GROUP} -m 0640 \
		${WRKSRC}/${PORTNAME}.conf ${PREFIX}/etc/${PORTNAME}.conf.sample
.if !exists(${PREFIX}/etc/${PORTNAME}.conf)
	${INSTALL} -o ${SHAREOWN} -g ${RABL_GROUP} -m 0640 \
		${WRKSRC}/${PORTNAME}.conf ${PREFIX}/etc
.endif
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.	for i in ${PORTDOCS}
		${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.	endfor
.endif

.include <bsd.port.post.mk>
