// -*- mode: ObjC -*-

//  This file is part of class-dump, a utility for examining the Objective-C segment of Mach-O files.
//  Copyright (C) 1997-1998, 2000-2001, 2004-2009 Steve Nygard.

#import "CDTextClassDumpVisitor.h"

@interface CDClassDumpVisitor : CDTextClassDumpVisitor
{
}

- (void)willBeginVisiting;
- (void)didEndVisiting;

- (void)visitObjectiveCSegment:(CDObjectiveC1Processor *)anObjCSegment;

@end
