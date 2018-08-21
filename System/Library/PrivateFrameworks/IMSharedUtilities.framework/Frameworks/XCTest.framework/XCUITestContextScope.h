/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface XCUITestContextScope : NSObject {

	XCUITestContextScope* _parentScope;
	NSMutableArray* _handlers;

}

@property (readonly) XCUITestContextScope * parentScope;              //@synthesize parentScope=_parentScope - In the implementation block
@property (retain) NSMutableArray * handlers;                         //@synthesize handlers=_handlers - In the implementation block
-(id)initWithParentScope:(id)arg1 ;
-(XCUITestContextScope *)parentScope;
-(void)setHandlers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)handlers;
@end
