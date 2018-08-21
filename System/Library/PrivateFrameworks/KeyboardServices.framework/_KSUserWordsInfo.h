/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, _KSFileEntry;

@interface _KSUserWordsInfo : NSObject {

	NSDate* _modifiedDate;
	unsigned long long _size;
	_KSFileEntry* _file;

}
+(id)keyboardDirectory;
+(id)keyNamesExcludingData;
+(id)keyForData;
+(id)filesForLanguage:(id)arg1 ;
+(id)infoWithFiles:(id)arg1 ;
+(id)infoWithRecord:(id)arg1 ;
-(id)description;
-(id)initWithFiles:(id)arg1 ;
-(BOOL)isBetterThan:(id)arg1 ;
-(void)saveToRecord:(id)arg1 ;
-(id)initWithRecord:(id)arg1 ;
@end

