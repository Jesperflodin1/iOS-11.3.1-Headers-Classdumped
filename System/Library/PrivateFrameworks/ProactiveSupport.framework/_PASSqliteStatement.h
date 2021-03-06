/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _PASSqliteDatabase;

@interface _PASSqliteStatement : NSObject <NSDiscardableContent, NSCopying> {

	_PASSqliteDatabase* _owner;
	BOOL _isFinalized;
	unsigned _useCount;
	sqlite3_stmtRef _stmt;

}

@property (nonatomic,readonly) sqlite3_stmtRef stmt;              //@synthesize stmt=_stmt - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(int)bindParam:(int)arg1 toDouble:(double)arg2 ;
-(BOOL)isColumnNull:(int)arg1 ;
-(id)getNSStringForColumn:(int)arg1 ;
-(int)bindNamedParam:(const char*)arg1 toInt64:(long long)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toNSString:(id)arg2 ;
-(int)bindNamedParamToNull:(const char*)arg1 ;
-(int)bindNamedParam:(const char*)arg1 toNSData:(id)arg2 ;
-(long long)getInt64ForColumn:(int)arg1 ;
-(int)bindParam:(int)arg1 toInt64:(long long)arg2 ;
-(long long)getIntegerForColumn:(int)arg1 ;
-(int)bindParamToNull:(int)arg1 ;
-(int)bindParam:(int)arg1 toNSData:(id)arg2 ;
-(int)bindParam:(int)arg1 toInteger:(long long)arg2 ;
-(id)getNSDataForColumn:(int)arg1 ;
-(int)bindNamedParam:(const char*)arg1 toInteger:(long long)arg2 ;
-(int)bindParam:(int)arg1 toNSString:(id)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toDouble:(double)arg2 ;
-(double)getDoubleForColumn:(int)arg1 ;
-(id)initWithStatementPointer:(sqlite3_stmtRef)arg1 owner:(id)arg2 ;
-(void)_finalizeWithLogWarning:(id)arg1 ;
-(sqlite3_stmtRef)stmt;
@end

