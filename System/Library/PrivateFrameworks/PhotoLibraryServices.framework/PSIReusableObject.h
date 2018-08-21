/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIReusableObject : NSObject {

	BOOL _isPreparedForReuse;
	BOOL _isPreparingFromStatement;
	BOOL _isPreparedFromStatement;

}

@property (nonatomic,readonly) BOOL isPreparedFromStatement;              //@synthesize isPreparedFromStatement=_isPreparedFromStatement - In the implementation block
-(id)init;
-(void)prepareForReuse;
-(void)prepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(void)didPrepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)isPreparedFromStatement;
@end

