# New ports collection makefile for:	Excel::Template
# Date created:				06 December 2005
# Whom:					Espen Tagestad <espen@tagestad.no>
#
# $FreeBSD: ports/textproc/p5-Excel-Template/Makefile,v 1.15 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	Excel-Template
PORTVERSION=	0.34
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Perl module for templating Excel files

BUILD_DEPENDS=	p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy \
		p5-Test-Exception>=0.21:${PORTSDIR}/devel/p5-Test-Exception \
		p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser \
		p5-Spreadsheet-WriteExcel>=0:${PORTSDIR}/textproc/p5-Spreadsheet-WriteExcel \
		p5-Test-Deep>=0:${PORTSDIR}/devel/p5-Test-Deep
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Excel::Template.3 \
		Excel::Template::Base.3 \
		Excel::Template::Container.3 \
		Excel::Template::Container::Bold.3 \
		Excel::Template::Container::Conditional.3 \
		Excel::Template::Container::Format.3 \
		Excel::Template::Container::Hidden.3 \
		Excel::Template::Container::Italic.3 \
		Excel::Template::Container::KeepLeadingZeros.3 \
		Excel::Template::Container::Locked.3 \
		Excel::Template::Container::Loop.3 \
		Excel::Template::Container::Outline.3 \
		Excel::Template::Container::Row.3 \
		Excel::Template::Container::Scope.3 \
		Excel::Template::Container::Shadow.3 \
		Excel::Template::Container::Strikeout.3 \
		Excel::Template::Container::Workbook.3 \
		Excel::Template::Container::Worksheet.3 \
		Excel::Template::Context.3 \
		Excel::Template::Element.3 \
		Excel::Template::Element::Backref.3 \
		Excel::Template::Element::Cell.3 \
		Excel::Template::Element::Formula.3 \
		Excel::Template::Element::FreezePanes.3 \
		Excel::Template::Element::Image.3 \
		Excel::Template::Element::MergeRange.3 \
		Excel::Template::Element::Range.3 \
		Excel::Template::Element::Var.3 \
		Excel::Template::Factory.3 \
		Excel::Template::Format.3 \
		Excel::Template::Iterator.3 \
		Excel::Template::TextObject.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 500800
RUN_DEPENDS+=	p5-Unicode-String>=0:${PORTSDIR}/converters/p5-Unicode-String
CONFIGURE_ARGS+=	USE_UNICODE=1
.endif

.include <bsd.port.post.mk>
