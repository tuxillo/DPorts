# New ports collection makefile for:	mail/firepay
# Date created:				Sun 31 May 16:35:00 WST 2004
# Whom:					Dean Hollister <dean@odyssey.apana.org.au>
#
# $FreeBSD: ports/mail/firepay/Makefile,v 1.6 2012/11/17 05:59:03 svnexp Exp $
#

PORTNAME=	firepay
PORTVERSION=	0.9.5
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	http://www.wa.apana.org.au/~dean/sources/ \
		ftp://ftp.wa.apana.org.au/pub/pc/unix/packages/

MAINTAINER=	dean@odyssey.apana.org.au
COMMENT=	Implementation of the HashCash/MIME specification

USE_BZIP2=	yes
HAS_CONFIGURE=	yes

MAN1=		checkpayment.1 firepay.1 multiwrap.1 processmail.1 \
		sendmailpay.1 strippayment.1 takepayment.1

.include <bsd.port.pre.mk>

WRKSRC=		${WRKDIR}/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's|(unsigned char) dest-\>s\[o++\] = c|dest-\>s\[o++\] = (char) c|' \
		${WRKSRC}/firemime/firemime.c

pre-configure:
	@-${RM} -r ${WRKSRC}/firemake/*.orig
	${MV} ${WRKSRC}/conf/sendmailpay.conf ${WRKSRC}/conf/sendmailpay.conf.sample

.include <bsd.port.post.mk>
