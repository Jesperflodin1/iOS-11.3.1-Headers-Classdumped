/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLPhotoDCFObject : NSObject {

	NSString* _name;
	int _number;

}
+(id)validDCFNameForName:(id)arg1 requiredLength:(int)arg2 nameLength:(int)arg3 number:(int*)arg4 numberRange:(NSRange)arg5 suffix:(id)arg6 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(id)initWithName:(id)arg1 number:(int)arg2 ;
-(void)setWriteIsPending:(BOOL)arg1 ;
-(int)number;
@end

