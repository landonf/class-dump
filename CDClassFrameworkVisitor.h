// -*- mode: ObjC -*-

//  This file is part of class-dump, a utility for examining the Objective-C segment of Mach-O files.
//  Copyright (C) 1997-1998, 2000-2001, 2004-2009 Steve Nygard.

#import "CDVisitor.h"

@interface CDClassFrameworkVisitor : CDVisitor
{
    NSMutableDictionary *frameworkNamesByClassName;
    NSMutableDictionary *frameworkNamesByProtocolName;
    NSString *frameworkName;
}

- (id)init;
- (void)dealloc;

- (NSDictionary *)frameworkNamesByClassName;
- (NSDictionary *)frameworkNamesByProtocolName;

- (NSString *)frameworkName;
- (void)setFrameworkName:(NSString *)newFrameworkName;

- (void)willVisitObjectiveCSegment:(CDObjectiveC1Processor *)anObjCSegment;
- (void)willVisitClass:(CDOCClass *)aClass;
- (void)willVisitProtocol:(CDOCProtocol *)aProtocol;

@end
