# Ports collection makefile for: pear-VersionControl_SVN
# Date created: 30 Oct 2007
# Whom: Greg Larkin <glarkin@FreeBSD.org>
#
# $FreeBSD: ports/devel/pear-VersionControl_SVN/Makefile,v 1.7 2012/11/17 05:56:40 svnexp Exp $
#

PORTNAME=	VersionControl_SVN
PORTVERSION=	0.4.0
CATEGORIES=	devel pear

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	Wrapper interface for the Subversion command-line client

USE_PHP=	yes
IGNORE_WITH_PHP=4

BUILD_DEPENDS=	pear>=1.9.4:${PORTSDIR}/devel/pear \
		pear-XML_Parser>=1.3.4:${PORTSDIR}/devel/pear-XML_Parser
RUN_DEPENDS=	pear>=1.9.4:${PORTSDIR}/devel/pear \
		pear-XML_Parser>=1.3.4:${PORTSDIR}/devel/pear-XML_Parser

CATEGORY=	VersionControl_SVN
FILES=		SVN.php \
		SVN/Add.php \
		SVN/Blame.php \
		SVN/Cat.php \
		SVN/Checkout.php \
		SVN/Cleanup.php \
		SVN/Commit.php \
		SVN/Copy.php \
		SVN/Delete.php \
		SVN/Diff.php \
		SVN/Export.php \
		SVN/Import.php \
		SVN/Info.php \
		SVN/List.php \
		SVN/Log.php \
		SVN/Merge.php \
		SVN/Mkdir.php \
		SVN/Move.php \
		SVN/Parsers/Log.php \
		SVN/Propdel.php \
		SVN/Propget.php \
		SVN/Proplist.php \
		SVN/Propset.php \
		SVN/Resolved.php \
		SVN/Revert.php \
		SVN/Status.php \
		SVN/Switch.php \
		SVN/Update.php
EXAMPLES=	example1.php \
		example_tree.php
_EXAMPLESDIR=	docs/examples

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
