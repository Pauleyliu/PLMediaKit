/*
 *  PLCore.h
 *  Apollo
 *
 *  Created by xhan on 10-8-30.
 *  Copyright 2010 ixHan.com. All rights reserved.
 *
 */

#import "PLPLGlobal.h"
#if TARGET_OS_IPHONE || BUILD_AS_IPHONE
#import "PLT.h"
#endif
#import "PLNSAdditions.h"

#define PLArray(...) [NSArray arrayWithObjects:__VA_ARGS__, nil]
#define PLArrayM(...) [NSMutableArray arrayWithObjects:__VA_ARGS__, nil]
#define PLDict(...) [NSDictionary dictionaryWithObjectsAndKeys:__VA_ARGS__,nil]

#define StringAdd(a,b) [NSString stringWithFormat:@"%@%@",a,b]

#define PLStringFromInt(a) [NSString stringWithFormat:@"%d",a]

#define CLIP(x,min,max) ((x) < (min) ? (min) : ((x) > (max) ? (max) : (x) ))
#define CENTER(x,min,max) CLIP((x),(min),(max))

#define BundlePath(name) [[NSBundle mainBundle] pathForResource:name ofType:nil]

#define URL(string) [NSURL URLWithString:string]

#define unless(condition) if (!(condition))


#define weak(value) __block id wself = value

#define I(value) [value intValue]

#define IsStringEmpty(str) (![(str) isNonEmpty])
