# New ports collection makefile for:	dtpstree
# Date created:				17 June 2010
# Whom:					Douglas Thrift
#
# $FreeBSD: ports/sysutils/dtpstree/Makefile,v 1.4 2012/11/17 06:01:29 svnexp Exp $
#

PORTNAME=	dtpstree
PORTVERSION=	1.0.3
CATEGORIES=	sysutils
MASTER_SITES=	http://apt.douglasthrift.net/files/${PORTNAME}/ \
		http://code.douglasthrift.net/files/${PORTNAME}/

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	Display a tree of processes

LICENSE=	AL2

USE_XZ=		yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
MAKEFILE=	GNUmakefile
MAN1=		dtpstree.1
PLIST_FILES=	bin/dtpstree

.include <bsd.port.mk>
