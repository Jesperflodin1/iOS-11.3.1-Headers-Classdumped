/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTest/XCUIElementQuery.h>

@class XCUIApplication, XCElementSnapshot;

@interface XCApplicationQuery : XCUIElementQuery {

	XCUIApplication* _application;
	XCElementSnapshot* _lastSnapshot;

}

@property (retain) XCElementSnapshot * lastSnapshot;              //@synthesize lastSnapshot=_lastSnapshot - In the implementation block
-(void)dealloc;
-(id)initWithApplication:(id)arg1 ;
-(id)application;
-(void)setLastSnapshot:(XCElementSnapshot *)arg1 ;
-(XCElementSnapshot *)lastSnapshot;
@end

