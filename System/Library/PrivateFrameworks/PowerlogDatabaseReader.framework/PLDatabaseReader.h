/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PowerlogDatabaseReader.framework/PowerlogDatabaseReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PowerlogDatabaseReader/PowerlogDatabaseReader-Structs.h>
@interface PLDatabaseReader : NSObject {

	sqlite3Ref _dbConnection;

}

@property (assign) sqlite3Ref dbConnection;              //@synthesize dbConnection=_dbConnection - In the implementation block
-(void)dealloc;
-(id)stringValueOfTable:(id)arg1 ;
-(id)initWithDatabaseFile:(id)arg1 ;
-(id)tableNamesFromDatabase;
-(sqlite3Ref)dbConnection;
-(id)performStatement:(sqlite3_stmtRef)arg1 ;
-(void)setDbConnection:(sqlite3Ref)arg1 ;
-(sqlite3Ref)openDatabaseFile:(id)arg1 ;
-(id)prepareStatementAndPerformWithString:(id)arg1 ;
@end
