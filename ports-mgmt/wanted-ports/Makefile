# Created by: Matthew Seaman <m.seaman@infracaninophile.co.uk>
# $FreeBSD: ports/ports-mgmt/wanted-ports/Makefile,v 1.6 2012/12/15 09:34:28 svnexp Exp $

PORTNAME=	wanted-ports
PORTVERSION=	0.2
#PORTREVISION is set from ${CFGFILE}
CATEGORIES=	ports-mgmt
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Just depend on a configurable, arbitrary set of other ports

LICENSE=	BSD

NO_BUILD=	yes
SUB_FILES=	${PORTNAME}   \
		${PORTNAME}.1
SUB_LIST=	PORTNAME=${PORTNAME} \
		PKGNAME=${PKGNAME}
PLIST_SUB=	PORTNAME=${PORTNAME}
PLIST_FILES=	bin/${PORTNAME}

MAN1=		${PORTNAME}.1

.if defined(WANTEDPORTSCFG)
CFGFILE=	${WANTEDPORTSCFG}
.else
CFGFILE?=	/var/db/${PORTNAME}.conf
.endif

.if exists(${CFGFILE})
.include "${CFGFILE}"
.endif

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}
	${INSTALL_MAN} ${WRKDIR}/${PORTNAME}.1 ${MANPREFIX}/man/man1/

.include <bsd.port.mk>
