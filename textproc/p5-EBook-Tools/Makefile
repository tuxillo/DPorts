# New ports collection makefile for:	p5-EBook-Tools
# Date created:		20 February 2009
# Whom:	      		simond@irrelevant.org
#
# $FreeBSD: ports/textproc/p5-EBook-Tools/Makefile,v 1.9 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	EBook-Tools
PORTVERSION=	0.4.9
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	simond@irrelevant.org
COMMENT=	Object class for manipulating and generating E-books

BUILD_DEPENDS=	p5-Archive-Zip>=0:${PORTSDIR}/archivers/p5-Archive-Zip \
		p5-Data-UUID>=0:${PORTSDIR}/devel/p5-Data-UUID \
		p5-Config-IniFiles>=0:${PORTSDIR}/devel/p5-Config-IniFiles \
		p5-Date-Manip>=0:${PORTSDIR}/devel/p5-Date-Manip \
		p5-File-MimeInfo>=0:${PORTSDIR}/devel/p5-File-MimeInfo \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-Tie-IxHash>=0:${PORTSDIR}/devel/p5-Tie-IxHash \
		p5-XML-Twig>=0:${PORTSDIR}/textproc/p5-XML-Twig \
		p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp \
		p5-Palm>=0:${PORTSDIR}/palm/p5-Palm \
		p5-Image-Size>=0:${PORTSDIR}/graphics/p5-Image-Size \
		p5-String-CRC32>=0:${PORTSDIR}/devel/p5-String-CRC32 \
		txt2html>=0:${PORTSDIR}/textproc/txt2html \
		p5-version>=0:${PORTSDIR}/devel/p5-version \
		p5-Bit-Vector>=0:${PORTSDIR}/math/p5-Bit-Vector \
		p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils
RUN_DEPENDS:=	${BUILD_DEPENDS}
RUN_DEPENDS+=	${LOCALBASE}/bin/tidy4:${PORTSDIR}/www/tidy

PERL_MODBUILD=	yes

MAN1=	ebook.1
MAN3=		EBook::Tools.3 \
		EBook::Tools::EReader.3 \
		EBook::Tools::IMP.3 \
		EBook::Tools::LZSS.3 \
		EBook::Tools::MSReader.3 \
		EBook::Tools::Mobipocket.3 \
		EBook::Tools::PalmDoc.3 \
		EBook::Tools::Unpack.3 \

.include <bsd.port.mk>
