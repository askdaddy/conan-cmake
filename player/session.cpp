//
// Created by Seven on 2023/7/6.
//

#include <string>
#include <iostream>
#include "session.h"
#include "jwt-cpp/jwt.h"

void session::hello(std::string & token) {
//    std::string token = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXUyJ9.eyJpc3MiOiJhdXRoMCJ9.AbIJTDMFc7yUa5MhvcP03nJPyCPzZtQcGEp-zWfOkEE";
    auto decoded = jwt::decode(token);
    for (auto &e: decoded.get_payload_claims()) {

        std::cout << e.first << " = " << e.second << std::endl;
    }
}

std::string session::create() {
    auto token = jwt::create()
    .set_issuer("Seven")
    .set_type("JWS")
    .set_payload_claim("auth",jwt::claim(std::string ("123"))).sign(jwt::algorithm::none{});
    return (token);
}
