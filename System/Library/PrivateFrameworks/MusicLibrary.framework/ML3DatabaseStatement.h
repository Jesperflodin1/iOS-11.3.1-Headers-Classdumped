/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSString, ML3DatabaseConnection;

@interface ML3DatabaseStatement : NSObject {

	NSString* _sql;
	BOOL _clearBindingsAfterRunning;
	BOOL _isExecuting;
	ML3DatabaseConnection* _connection;
	sqlite3_stmtRef _sqliteStatement;

}

@property (nonatomic,readonly) NSString * sql; 
@property (nonatomic,readonly) ML3DatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef sqliteStatement;                 //@synthesize sqliteStatement=_sqliteStatement - In the implementation block
@property (assign,nonatomic) BOOL clearBindingsAfterRunning;                    //@synthesize clearBindingsAfterRunning=_clearBindingsAfterRunning - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                                  //@synthesize isExecuting=_isExecuting - In the implementation block
-(int)step;
-(void)dealloc;
-(id)description;
-(int)reset;
-(BOOL)isBusy;
-(ML3DatabaseConnection *)connection;
-(BOOL)isExecuting;
-(int)finalizeStatement;
-(sqlite3_stmtRef)sqliteStatement;
-(NSString *)sql;
-(int)clearBindings;
-(BOOL)clearBindingsAfterRunning;
-(void)bindValue:(id)arg1 forParameterAtPosition:(int)arg2 ;
-(id)initWithSQLiteStatement:(sqlite3_stmtRef)arg1 SQL:(id)arg2 connection:(id)arg3 ;
-(void)bindInt:(int)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindInt64:(long long)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindDouble:(double)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindNullForParameterAtPosition:(int)arg1 ;
-(void)bindBytes:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(void)bindBytesNoCopy:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(void)bindUTF8String:(const char*)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindUTF8StringNoCopy:(const char*)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindUTF8StringNoCopy:(const char*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(void)bindValuesForParameterNames:(id)arg1 ;
-(void)bindValuesInArray:(id)arg1 ;
-(void)setClearBindingsAfterRunning:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(void)setIsExecuting:(BOOL)arg1 ;
@end

