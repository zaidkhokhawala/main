

import React from 'react';
import { NavLink } from 'react-router-dom';


function Headerbar() {
  return (
    
<div>

<div className="sub-header">
    <div className="container">
      <div className="row">
        <div className="col-lg-8 col-md-8">
          <ul className="info">
            <li><i className="fa fa-envelope" /> info@company.com</li>
            <li><i className="fa fa-map" /> Sunny Isles Beach, FL 33160</li>
          </ul>
        </div>
        <div className="col-lg-4 col-md-4">
          <ul className="social-links">
            <li><a href="#"><i className="fab fa-facebook" /></a></li>
            <li><a href="https://x.com/minthu" target="_blank"><i className="fab fa-twitter" /></a></li>
            <li><a href="#"><i className="fab fa-linkedin" /></a></li>
            <li><a href="#"><i className="fab fa-instagram" /></a></li>
          </ul>
        </div>
      </div>
    </div>
  </div>
  {/* ***** Header Area Start ***** */}
  <header className="header-area header-sticky" >
    <div className="container">
      <div className="row">
        <div className="col-12">
          <nav className="main-nav">
            {/* ***** Logo Start ***** */}
            <a className="logo">
              <h1>Villa</h1>
            </a>
            {/* ***** Logo End ***** */}
            {/* ***** Menu Start ***** */}




           


            <div className='container-fluid'>
      <ul className="nav maincss">
        <li><NavLink to="/">Home</NavLink></li>
        <li><NavLink to="/Properties">Properties</NavLink></li>
        <li><NavLink to="/Property_details">Property Details</NavLink></li>
        <li><NavLink to="/Contact">Contact Us</NavLink></li>
        <li><NavLink to="/login">Login</NavLink></li>

        <li><a href="#"><i className="fa fa-calendar" /> Schedule a visit</a></li>
      </ul>
    </div>


        
           
           
            {/* ***** Menu End ***** */}
          </nav>
        </div>
      </div>
    </div>
  </header>
  </div>
  )
}

export default Headerbar