/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface TCDumpType : NSObject {

	NSString* mName;

}
-(id)init;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(void)fromXml:(xmlNode*)arg1 toBinary:(_sFILE*)arg2 state:(id)arg3 ;
@end
