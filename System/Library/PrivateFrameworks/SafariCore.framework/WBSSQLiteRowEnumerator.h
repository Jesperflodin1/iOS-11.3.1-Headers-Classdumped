/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class WBSSQLiteStatement, WBSSQLiteRow;

@interface WBSSQLiteRowEnumerator : NSEnumerator {

	WBSSQLiteStatement* _statement;
	WBSSQLiteRow* _row;
	int _lastResultCode;

}

@property (nonatomic,readonly) WBSSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) int lastResultCode;                          //@synthesize lastResultCode=_lastResultCode - In the implementation block
-(id)nextObject;
-(id)initWithResultsOfStatement:(id)arg1 ;
-(WBSSQLiteStatement *)statement;
-(int)lastResultCode;
@end

