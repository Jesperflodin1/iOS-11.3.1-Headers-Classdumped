/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OITSUTemporaryDirectory : NSObject {

	NSString* _path;
	BOOL _leak;

}
-(id)init;
-(void)dealloc;
-(id)path;
-(id)URL;
-(id)initWithSignature:(id)arg1 ;
-(void)leakTemporaryDirectory;
-(id)initWithSignature:(id)arg1 subdirectory:(id)arg2 ;
-(void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 ;
@end

