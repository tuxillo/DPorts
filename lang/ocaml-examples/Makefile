# New ports collection makefile for:	ocaml-examples
# Date created:		2006-07-27
# Whom:			Stanislav Sedov <ssedov@mbsd.msk.ru>
#
# $FreeBSD: ports/lang/ocaml-examples/Makefile,v 1.7 2012/11/17 05:58:53 svnexp Exp $
#

PORTNAME=	ocaml
PORTVERSION=	3.12
CATEGORIES=	lang
MASTER_SITES=	http://cristal.inria.fr/caml_examples/
PKGNAMESUFFIX=	-examples
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Example programs for the Objective Caml

NO_BUILD=	yes

do-install:
.ifndef		NOPORTEXAMPLES
	@${MKDIR} ${EXAMPLESDIR}
	@${TAR} -cf- -C ${WRKSRC} --exclude Imakefile . | \
		${TAR} -xf- -C ${EXAMPLESDIR}
	@${FIND} ${EXAMPLESDIR} -type f -exec ${CHMOD} ${SHAREMODE} {} \;
	@${FIND} ${EXAMPLESDIR} -exec ${CHOWN} ${SHAREOWN} {} \;
.endif

.include <bsd.port.mk>
